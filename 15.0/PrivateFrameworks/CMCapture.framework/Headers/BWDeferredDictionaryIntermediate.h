// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWDEFERREDDICTIONARYINTERMEDIATE_H
#define BWDEFERREDDICTIONARYINTERMEDIATE_H

@class NSDictionary;


#import "BWDeferredDataIntermediate.h"

@interface BWDeferredDictionaryIntermediate : BWDeferredDataIntermediate

@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary


+(BOOL)supportsSecureCoding;
-(id)archive:(*int)arg0 ;
-(id)description;
-(id)fetchWithCustomClassesAndRetain:(id)arg0 err:(*int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 tag:(id)arg1 URL:(id)arg2 ;
-(int)flush;
-(int)setArchive:(id)arg0 ;
-(int)setURL:(id)arg0 prefetchQueue:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif