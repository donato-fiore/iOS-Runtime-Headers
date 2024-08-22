// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTINTERPROCESSCHANGENOTIFIER_H
#define MTINTERPROCESSCHANGENOTIFIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTInterprocessChangeNotifier : NSObject {
    NSString *_identifier;
    int _token;
}




+(id)fullIdentifier:(id)arg0 ;
+(void)notify:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 onChange:(id)arg1 ;
-(void)dealloc;
-(void)notify;
-(void)stop;


@end


#endif