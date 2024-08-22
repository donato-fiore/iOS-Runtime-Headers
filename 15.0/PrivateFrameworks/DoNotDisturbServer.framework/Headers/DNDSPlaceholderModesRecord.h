// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSPLACEHOLDERMODESRECORD_H
#define DNDSPLACEHOLDERMODESRECORD_H

@class NSString, NSArray;
@protocol NSCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>


@interface DNDSPlaceholderModesRecord : NSObject <NSCopying, DNDSBackingStoreRecord>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *placeholderModes; // ivar: _placeholderModes
@property (readonly) Class superclass;


+(id)backingStoreWithFileURL:(id)arg0 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithModePlaceholders:(id)arg0 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;


@end


#endif