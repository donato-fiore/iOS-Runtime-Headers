// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSABSTRACTHANDOUT_H
#define CLSABSTRACTHANDOUT_H

@class NSString, NSDate, NSArray;
@protocol CLSMutableAssetAdopter, CLSAssetAdopter;


#import "CLSObject.h"

@interface CLSAbstractHandout : CLSObject <CLSMutableAssetAdopter, CLSAssetAdopter>

 {
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    NSDate *_dateOfPublication;
}


@property (readonly, nonatomic) NSArray *assets; // ivar: assets
@property (retain, nonatomic) NSDate *dateOfPublication;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *dueDate;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *instructions;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addAsset:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)removeAsset:(id)arg0 ;


@end


#endif