// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKBASEPLAYER_H
#define GKBASEPLAYER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface GKBasePlayer : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, retain, nonatomic) NSString *playerID;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif