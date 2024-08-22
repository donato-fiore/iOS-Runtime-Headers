// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCONTENTMAPPING_H
#define ICCONTENTMAPPING_H

@class NSOrderedSet, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ICContentMapping : NSObject

@property (readonly, nonatomic) NSOrderedSet *contentItemClasses;
@property (readonly, nonatomic) NSDictionary *definition; // ivar: _definition
@property (readonly, nonatomic) NSString *destinationKey;
@property (readonly, nonatomic) NSString *destinationType;
@property (readonly, nonatomic) BOOL inputRequired;
@property (readonly, nonatomic) id *parameterDefault;
@property (readonly, nonatomic) NSDictionary *parameterUI;
@property (readonly, nonatomic) BOOL skipURLEncoding;
@property (readonly, nonatomic) NSString *sourceKey;
@property (readonly, nonatomic) NSString *sourceType;
@property (readonly, nonatomic) BOOL supportsMultipleItems;
@property (readonly, nonatomic) NSDictionary *valueMapping;


-(id)initWithDefinition:(id)arg0 ;
// -(void)getContentCollection:(id)arg0 withInput:(unk)arg1 parameters:(id)arg2  ;
// -(void)getStringRepresentation:(id)arg0 withInput:(unk)arg1 parameters:(id)arg2  ;


@end


#endif