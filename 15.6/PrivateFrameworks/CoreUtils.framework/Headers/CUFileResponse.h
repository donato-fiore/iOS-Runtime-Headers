// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUFILERESPONSE_H
#define CUFILERESPONSE_H

@class NSArray;
@protocol CUDictionaryCodable;

#import <Foundation/Foundation.h>


@interface CUFileResponse : NSObject <CUDictionaryCodable>



@property (copy, nonatomic) NSArray *fileItems; // ivar: _fileItems
@property (nonatomic) unsigned int flags; // ivar: _flags


-(id)description;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithDictionary:(id)arg0 ;


@end


#endif