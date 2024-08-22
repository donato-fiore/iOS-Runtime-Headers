// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIONTOLOGYNODE_H
#define VIONTOLOGYNODE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VIOntologyNode : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *knowledgeGraphID; // ivar: _knowledgeGraphID
@property (readonly, copy, nonatomic) NSString *labelDebugDescription; // ivar: _labelDebugDescription


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKnowledgeGraphID:(id)arg0 labelDebugDescription:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif