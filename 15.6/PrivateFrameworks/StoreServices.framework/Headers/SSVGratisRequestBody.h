// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVGRATISREQUESTBODY_H
#define SSVGRATISREQUESTBODY_H

@class NSMutableDictionary, NSData, NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSVGratisRequestBody : NSObject <NSCopying>

 {
    NSMutableDictionary *_additionalParameters;
}


@property (readonly, nonatomic) NSData *JSONBodyData;
@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountID
@property (copy, nonatomic) NSArray *applications; // ivar: _applications
@property (nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest; // ivar: _backgroundRequest
@property (readonly, nonatomic) NSMutableDictionary *bodyDictionary;
@property (copy, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (copy, nonatomic) NSArray *itemIdentifiers; // ivar: _itemIdentifiers
@property (readonly, nonatomic) NSData *propertyListBodyData;
@property (readonly, nonatomic) NSInteger requestStyle; // ivar: _style


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRequestStyle:(NSInteger)arg0 ;
-(void)setValue:(id)arg0 forBodyParameter:(id)arg1 ;


@end


#endif