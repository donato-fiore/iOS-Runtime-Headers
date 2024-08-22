// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSOBJECTWRAPPER_H
#define MSOBJECTWRAPPER_H

@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface MSObjectWrapper : NSObject

@property (nonatomic) int errorCount; // ivar: _errorCount
@property (readonly, nonatomic) NSObject<NSCoding> *object; // ivar: _object
@property (nonatomic) NSInteger size; // ivar: _size
@property (nonatomic) NSInteger uniqueID; // ivar: _uniqueID


+(NSInteger)indexOfObject:(id)arg0 inWrapperArray:(id)arg1 ;
+(id)objectsFromWrappers:(id)arg0 ;
+(id)objectsFromWrappers:(id)arg0 equalToObject:(id)arg1 ;
+(id)wrapperWithObject:(id)arg0 size:(NSInteger)arg1 ;
-(id)initWithObject:(id)arg0 size:(NSInteger)arg1 ;


@end


#endif