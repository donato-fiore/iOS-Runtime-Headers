// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSUBSCRIPTIONFETCHOPTIONDESCRIPTION_H
#define VSSUBSCRIPTIONFETCHOPTIONDESCRIPTION_H

@class NSPredicate, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VSSubscriptionFetchOptionDescription : NSObject <NSCopying>



@property (retain, nonatomic) Class allowedClass; // ivar: _allowedClass
@property (copy, nonatomic) NSPredicate *allowedValuePredicate; // ivar: _allowedValuePredicate
@property (nonatomic, getter=isContainer) BOOL container; // ivar: _container
@property (retain, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) NSUInteger minCount; // ivar: _minCount


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif