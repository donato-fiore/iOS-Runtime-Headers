// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REELEMENTACTION_H
#define REELEMENTACTION_H

@protocol NSCopying, NSCoding, REElementActionDelegate;

#import <Foundation/Foundation.h>


@interface REElementAction : NSObject <NSCopying, NSCoding>

 {
    id<REElementActionDelegate> *_delegate;
}


@property (weak, nonatomic) NSObject<REElementActionDelegate> *delegate;
@property (nonatomic) BOOL forceExecution; // ivar: _forceExecution


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_didFinish:(BOOL)arg0 ;
-(void)_performWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif