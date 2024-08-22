// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECITEM_H
#define _DECITEM_H

@class NSString, NSUUID, NSMutableDictionary;
@protocol _DECItemEquivalency, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _DECItem : NSObject <_DECItemEquivalency, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableDictionary *metadata; // ivar: _metadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(NSUInteger)category;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItem:(id)arg0 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif