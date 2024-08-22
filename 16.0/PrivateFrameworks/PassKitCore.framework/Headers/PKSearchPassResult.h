// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSEARCHPASSRESULT_H
#define PKSEARCHPASSRESULT_H

@class NSString;
@protocol PKSearchAutocompleteToken;

#import <Foundation/Foundation.h>


@interface PKSearchPassResult : NSObject <PKSearchAutocompleteToken>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)tokenType;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif