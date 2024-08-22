// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAPPREPRESENTATION_H
#define AXAPPREPRESENTATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXAppRepresentation : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) BOOL isLayoutFullscreenModal;
@property (readonly, nonatomic) BOOL isLayoutPrimary;
@property (nonatomic) NSInteger layoutRole; // ivar: _layoutRole
@property (nonatomic) int pid; // ivar: _pid


+(BOOL)supportsSecureCoding;
+(id)appWithPID:(int)arg0 bundleID:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_commonInit;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif