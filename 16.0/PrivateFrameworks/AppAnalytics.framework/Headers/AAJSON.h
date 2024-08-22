// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAJSON_H
#define AAJSON_H

@class NSArray, NSNumber, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface AAJSON : NSObject {
    ? value;
}


@property (nonatomic, readonly) id *any;
@property (nonatomic, readonly) NSArray *array;
@property (nonatomic, readonly) BOOL exists;
@property (nonatomic, readonly) NSNumber *number;
@property (nonatomic, readonly) NSDictionary *object;
@property (nonatomic, readonly) NSString *string;


-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)objectAtIndexedSubscript:(NSInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)toDataWithOptions:(NSUInteger)arg0 ;


@end


#endif