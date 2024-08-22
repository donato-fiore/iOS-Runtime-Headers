// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTREMHASHTAG_H
#define TTREMHASHTAG_H

@class NSString;
@protocol TTModelAttributeComparable;

#import <Foundation/Foundation.h>


@interface TTREMHashtag : NSObject <TTModelAttributeComparable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *objectIdentifier; // ivar: _objectIdentifier
@property (readonly) Class superclass;


+(BOOL)isHashtag:(id)arg0 equalToModelComparable:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToModelComparable:(id)arg0 ;


@end


#endif