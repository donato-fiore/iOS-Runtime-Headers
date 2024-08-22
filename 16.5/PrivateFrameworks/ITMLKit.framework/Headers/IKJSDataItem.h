// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSDATAITEM_H
#define IKJSDATAITEM_H

@class NSString, NSDictionary;
@protocol NSObject, IKJSDataItem, _IKJSDataItemProxy, _IKJSDataItem;


#import "IKJSDataObservable.h"

@interface IKJSDataItem : IKJSDataObservable <NSObject, IKJSDataItem, _IKJSDataItemProxy, _IKJSDataItem>

 {
    NSString *_type;
}


@property (readonly, nonatomic) NSDictionary *dataDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *prototypeIdentifier; // ivar: _prototypeIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


+(id)makeDataItem:(id)arg0 ;
-(id)asPrivateIKJSDataItem;
-(id)init;
-(id)initWithType:(id)arg0 ;
-(id)initWithType:(id)arg0 identifier:(id)arg1 ;
-(id)initWithValue:(id)arg0 ;


@end


#endif