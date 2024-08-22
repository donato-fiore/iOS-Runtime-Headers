// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIBOOKMARKKEY_H
#define VUIBOOKMARKKEY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VUIBookmarkKey : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger keyType; // ivar: _keyType


-(id)description;
-(id)init;
-(id)initWithIdentifier:(id)arg0 keyType:(NSInteger)arg1 ;


@end


#endif