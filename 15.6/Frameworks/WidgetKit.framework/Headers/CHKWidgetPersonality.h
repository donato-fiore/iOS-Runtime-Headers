// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHKWIDGETPERSONALITY_H
#define CHKWIDGETPERSONALITY_H

@class NSString;
@protocol CHSWidgetPersonality, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHKWidgetPersonality : NSObject <CHSWidgetPersonality, NSSecureCoding>

 {
    ? extensionBundleIdentifier;
    ? kind;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *kind;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPersonality:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif