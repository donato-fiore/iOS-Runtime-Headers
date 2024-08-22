// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSIQUERYPLACETOKEN_H
#define PSIQUERYPLACETOKEN_H

@class NSDictionary;


#import "PSIQueryToken.h"

@interface PSIQueryPlaceToken : PSIQueryToken {
    NSDictionary *_locationNameByCategory;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 locationNameByCategory:(id)arg1 ;
-(id)parentToken;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif