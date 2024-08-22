// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETEAGGDPROBE_H
#define CNAUTOCOMPLETEAGGDPROBE_H

@class NSMutableDictionary, NSString;
@protocol CNAutocompleteProbe;

#import <Foundation/Foundation.h>


@interface CNAutocompleteAggdProbe : NSObject <CNAutocompleteProbe>



@property (retain, nonatomic) NSMutableDictionary *addData; // ivar: _addData
@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *keyPrefix; // ivar: _keyPrefix
@property (retain, nonatomic) NSMutableDictionary *setData; // ivar: _setData
@property (readonly) Class superclass;


+(id)preparedBundleIdentifier:(id)arg0 ;
-(id)fullKey:(id)arg0 ;
-(id)init;
-(id)initWithKeyPrefix:(id)arg0 ;
-(id)initWithKeyPrefix:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)recordAddValue:(id)arg0 forKey:(id)arg1 ;
-(void)recordSetValue:(id)arg0 forKey:(id)arg1 ;
-(void)sendData;


@end


#endif