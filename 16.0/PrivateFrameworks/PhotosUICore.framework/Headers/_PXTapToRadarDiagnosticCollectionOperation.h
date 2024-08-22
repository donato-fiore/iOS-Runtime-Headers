// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXTAPTORADARDIAGNOSTICCOLLECTIONOPERATION_H
#define _PXTAPTORADARDIAGNOSTICCOLLECTIONOPERATION_H

@class NSError, NSString;
@protocol PXTapToRadarDiagnosticCollectionOperation, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface _PXTapToRadarDiagnosticCollectionOperation : NSObject <PXTapToRadarDiagnosticCollectionOperation>

 {
    NSObject<OS_dispatch_group> *_completionGroup;
    BOOL _timedOut;
    BOOL _ended;
    BOOL _success;
    NSError *_error;
}


@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)initWithName:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)_timedOut;
-(void)endWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)installCompletionHandler:(id)arg0 ;


@end


#endif