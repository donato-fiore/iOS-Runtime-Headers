// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKAUTHORUTILITIES_H
#define TSKAUTHORUTILITIES_H


#import <Foundation/Foundation.h>


@interface TSKAuthorUtilities : NSObject



+(BOOL)author:(id)arg0 matchesAuthor:(id)arg1 ;
+(BOOL)author:(id)arg0 name:(id)arg1 matchesOtherAuthor:(id)arg2 otherName:(id)arg3 ;
+(BOOL)privateIDMatchesPublicID:(id)arg0 privateID:(id)arg1 ;
+(NSInteger)author:(id)arg0 matchesPrivateIDs:(id)arg1 ;
+(id)displayNameForAuthorName:(id)arg0 isPublicAuthor:(BOOL)arg1 documentRoot:(id)arg2 ;
+(id)publicIDFromSeed:(id)arg0 privateID:(id)arg1 ;
+(id)publicIDsFromSeed:(id)arg0 privateIDs:(id)arg1 ;


@end


#endif