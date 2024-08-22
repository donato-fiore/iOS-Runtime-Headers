// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFSTORYCONCRETERECIPELIBRARY_H
#define PFSTORYCONCRETERECIPELIBRARY_H

@class NSString, NSURL;
@protocol PFStoryRecipeLibrary;

#import <Foundation/Foundation.h>


@interface PFStoryConcreteRecipeLibrary : NSObject <PFStoryRecipeLibrary>



@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqualToLibrary:(id)arg0 ;
-(id)init;
-(id)initWithKind:(NSInteger)arg0 url:(id)arg1 ;


@end


#endif