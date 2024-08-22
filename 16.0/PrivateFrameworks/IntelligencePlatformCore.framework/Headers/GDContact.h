// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDCONTACT_H
#define GDCONTACT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface GDContact : NSObject

@property (readonly, nonatomic) NSInteger contactType; // ivar: _contactType
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *handle; // ivar: _handle


-(id)initWithHandle:(id)arg0 ;
-(id)initWithHandle:(id)arg0 contactType:(NSInteger)arg1 displayName:(id)arg2 ;


@end


#endif