// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUFILEITEM_H
#define CUFILEITEM_H

@class NSString;
@protocol CUDictionaryCodable;

#import <Foundation/Foundation.h>


@interface CUFileItem : NSObject <CUDictionaryCodable>



@property (readonly, nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger size; // ivar: _size
@property (nonatomic) int type; // ivar: _type


-(id)description;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithDictionary:(id)arg0 ;


@end


#endif