// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUCONVERSATIONVIRTUALPARTICIPANT_H
#define TUCONVERSATIONVIRTUALPARTICIPANT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUConversationVirtualParticipant : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *pluginName; // ivar: _pluginName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationVirtualParticipant:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(NSUInteger)arg0 pluginName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif