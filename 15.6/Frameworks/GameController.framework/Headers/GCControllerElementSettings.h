// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCCONTROLLERELEMENTSETTINGS_H
#define GCCONTROLLERELEMENTSETTINGS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCControllerElementSettings : NSObject <NSSecureCoding>



@property (copy, nonatomic) id *changedHandler; // ivar: _changedHandler
@property (readonly, nonatomic, getter=isCustomized) BOOL customized;
@property (nonatomic) BOOL invertHorizontally; // ivar: _invertHorizontally
@property (nonatomic) BOOL invertVertically; // ivar: _invertVertically
@property (readonly, nonatomic) NSString *mappingKey; // ivar: _mappingKey
@property (nonatomic) BOOL swapAxes; // ivar: _swapAxes


+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithElementKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDefaultValues;
-(void)setDictionaryRepresentation:(id)arg0 ;
-(void)setDictionaryRepresentation:(id)arg0 fromCoder:(BOOL)arg1 ;


@end


#endif