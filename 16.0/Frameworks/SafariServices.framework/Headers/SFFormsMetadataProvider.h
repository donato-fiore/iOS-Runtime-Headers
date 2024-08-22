// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFFORMSMETADATAPROVIDER_H
#define SFFORMSMETADATAPROVIDER_H

@class NSDictionary, NSString;
@protocol WBSFormsMetadataProvider;

#import <Foundation/Foundation.h>


@interface SFFormsMetadataProvider : NSObject <WBSFormsMetadataProvider>

 {
    NSDictionary *_frameHandleToForms;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger formCount;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrameHandleToFormsDictionary:(id)arg0 ;
-(void)enumerateFormsUsingBlock:(id)arg0 ;


@end


#endif