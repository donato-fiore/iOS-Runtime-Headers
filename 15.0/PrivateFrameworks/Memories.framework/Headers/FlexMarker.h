// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLEXMARKER_H
#define FLEXMARKER_H

@class NSString;
@protocol NSDictionaryCoding;

#import <Foundation/Foundation.h>


@interface FlexMarker : NSObject <NSDictionaryCoding>



@property (readonly, nonatomic) NSInteger markerID; // ivar: _markerID
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger number; // ivar: _number
@property (readonly, nonatomic) NSInteger position; // ivar: _position
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(NSUInteger)_decodeTypeAndBarsFromName;
-(id)description;
-(id)encodeAsDictionary;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithName:(id)arg0 markerID:(NSInteger)arg1 position:(NSInteger)arg2 ;


@end


#endif