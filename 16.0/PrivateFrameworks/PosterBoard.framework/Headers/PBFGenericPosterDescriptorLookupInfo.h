// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFGENERICPOSTERDESCRIPTORLOOKUPINFO_H
#define PBFGENERICPOSTERDESCRIPTORLOOKUPINFO_H

@class NSString, PRSServerPosterPath;
@protocol PBFPosterDescriptorLookupInfo, NSCopying, BSInvalidatable, PRPosterExtensionDescribing;

#import <Foundation/Foundation.h>


@interface PBFGenericPosterDescriptorLookupInfo : NSObject <PBFPosterDescriptorLookupInfo, NSCopying>

 {
    id<BSInvalidatable> *_pathValidityExtension;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PRPosterExtensionDescribing> *posterDescriptorExtension; // ivar: _extension
@property (readonly, nonatomic) PRSServerPosterPath *posterDescriptorPath; // ivar: _path
@property (readonly) Class superclass;


+(id)nullPosterDescriptorLookupInfo;
+(id)posterDescriptorLookupInfoForPath:(id)arg0 extension:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithPath:(id)arg0 extension:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif