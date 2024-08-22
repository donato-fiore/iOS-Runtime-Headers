// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTPUPPETSTORE_H
#define AVTPUPPETSTORE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AVTPuppetStore : NSObject

@property (copy, nonatomic) NSArray *puppetRecords; // ivar: _puppetRecords


+(id)createPuppetRecords;
-(id)allAvatarPuppetsExcluding:(id)arg0 error:(*id)arg1 ;
-(id)allAvatarPuppetsWithError:(*id)arg0 ;
-(id)allPuppetRecords;
-(id)avatarPuppetsForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)avatarsWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)initWithEnvironment:(id)arg0 ;
-(void)loadPuppetRecordsIfNeeded;


@end


#endif