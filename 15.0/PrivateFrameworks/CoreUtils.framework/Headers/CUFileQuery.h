// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUFILEQUERY_H
#define CUFILEQUERY_H

@class NSString;
@protocol CUDictionaryCodable;

#import <Foundation/Foundation.h>


@interface CUFileQuery : NSObject <CUDictionaryCodable>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSString *path; // ivar: _path


-(id)description;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithDictionary:(id)arg0 ;


@end


#endif