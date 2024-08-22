// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKGENRE_H
#define WLKGENRE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLKGenre : NSObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(id)genresWithDictionaries:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif