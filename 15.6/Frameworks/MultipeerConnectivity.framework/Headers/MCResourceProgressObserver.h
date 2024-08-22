// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCRESOURCEPROGRESSOBSERVER_H
#define MCRESOURCEPROGRESSOBSERVER_H

@class NSString, NSProgress;

#import <Foundation/Foundation.h>


@interface MCResourceProgressObserver : NSObject {
    BOOL _progressObserversSet;
}


@property (copy, nonatomic) id *cancelHandler; // ivar: _cancelHandler
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress


-(id)initWithName:(id)arg0 progress:(id)arg1 cancelHandler:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif