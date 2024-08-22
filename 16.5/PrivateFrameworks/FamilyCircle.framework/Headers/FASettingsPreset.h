// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FASETTINGSPRESET_H
#define FASETTINGSPRESET_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FASettingsPreset : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger maxAge; // ivar: _maxAge
@property (readonly, nonatomic) NSInteger minAge; // ivar: _minAge
@property (readonly, copy, nonatomic) NSArray *sources; // ivar: _sources


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 minAge:(NSInteger)arg1 maxAge:(NSInteger)arg2 sources:(id)arg3 ;
-(id)sourceWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif