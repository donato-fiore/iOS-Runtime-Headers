// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFPROPERTYLISTUTILITIES_H
#define PFPROPERTYLISTUTILITIES_H


#import <Foundation/Foundation.h>


@interface PFPropertyListUtilities : NSObject



+(BOOL)canEncodeInPropertyList:(id)arg0 ;
+(id)_filterArray:(id)arg0 block:(id)arg1 ;
+(id)_filterDictionary:(id)arg0 block:(id)arg1 ;
+(id)arrayFromEncodedData:(id)arg0 ;
+(id)dictionaryFromEncodedData:(id)arg0 ;
+(id)encodedDataWithPropertyListObject:(id)arg0 ;
+(id)encodedDataWithPropertyListObject:(id)arg0 format:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)filterPropertyList:(id)arg0 ;
+(id)filterPropertyList:(id)arg0 block:(id)arg1 ;
+(id)filterPropertyListNoData:(id)arg0 ;
+(id)mutableArrayFromEncodedData:(id)arg0 ;
+(id)mutableDictionaryFromEncodedData:(id)arg0 ;
+(id)propertyListObjectFromEncodedData:(id)arg0 expectedClass:(Class)arg1 options:(NSUInteger)arg2 ;
+(id)propertyListObjectFromEncodedData:(id)arg0 expectedClass:(Class)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;


@end


#endif