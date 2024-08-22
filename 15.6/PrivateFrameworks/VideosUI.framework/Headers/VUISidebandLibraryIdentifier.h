// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUISIDEBANDLIBRARYIDENTIFIER_H
#define VUISIDEBANDLIBRARYIDENTIFIER_H

@class NSString;
@protocol VUIMediaLibraryIdentifier;

#import <Foundation/Foundation.h>


@interface VUISidebandLibraryIdentifier : NSObject <VUIMediaLibraryIdentifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif