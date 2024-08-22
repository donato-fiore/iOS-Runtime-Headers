// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSREMOTECONTENTALERTACTION_H
#define SBSREMOTECONTENTALERTACTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSRemoteContentAlertAction : NSObject <NSSecureCoding>

 {
    NSString *_title;
    NSInteger _style;
}


@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSInteger style;
@property (readonly, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif