// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSSCREENSTRINGOBJ_H
#define BPSSCREENSTRINGOBJ_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BPSScreenStringObj : NSObject

@property (copy, nonatomic) NSString *compact; // ivar: _compact
@property (copy, nonatomic) NSString *regular; // ivar: _regular
@property (copy, nonatomic) NSString *size394h; // ivar: _size394h
@property (copy, nonatomic) NSString *size430h; // ivar: _size430h
@property (copy, nonatomic) NSString *size448h; // ivar: _size448h
@property (copy, nonatomic) NSString *size484h; // ivar: _size484h


+(id)screenStringsWithArray:(id)arg0 ;
-(id)initWithArray:(id)arg0 ;


@end


#endif