// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLISTMEDIALIBRARYIDENTIFIER_H
#define VUIPLISTMEDIALIBRARYIDENTIFIER_H

@class NSString, NSURL;
@protocol VUIMediaLibraryIdentifier;

#import <Foundation/Foundation.h>


@interface VUIPlistMediaLibraryIdentifier : NSObject <VUIMediaLibraryIdentifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *libraryFileURL; // ivar: _libraryFileURL
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;


@end


#endif