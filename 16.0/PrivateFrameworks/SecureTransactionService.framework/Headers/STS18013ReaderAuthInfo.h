// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STS18013READERAUTHINFO_H
#define STS18013READERAUTHINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface STS18013ReaderAuthInfo : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *organization; // ivar: _organization
@property (readonly, nonatomic) NSString *organizationUnit; // ivar: _organizationUnit


-(id)description;
-(id)initWithIdentifier:(id)arg0 organization:(id)arg1 organizationUnit:(id)arg2 ;


@end


#endif