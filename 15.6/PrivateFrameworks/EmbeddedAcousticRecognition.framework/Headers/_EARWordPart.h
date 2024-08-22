// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARWORDPART_H
#define _EARWORDPART_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface _EARWordPart : NSObject {
    NSString *_tagName;
}


@property (readonly, nonatomic) NSUInteger frequency; // ivar: _frequency
@property (readonly, nonatomic) NSString *orthography; // ivar: _orthography
@property (readonly, nonatomic) NSSet *pronunciations; // ivar: _pronunciations
@property (readonly, nonatomic) NSInteger tag; // ivar: _tag
@property (readonly, nonatomic) NSString *tagName;


-(id)initWithOrthography:(id)arg0 pronunciations:(id)arg1 tag:(NSInteger)arg2 ;
-(id)initWithOrthography:(id)arg0 pronunciations:(id)arg1 tagName:(id)arg2 frequency:(NSUInteger)arg3 ;


@end


#endif