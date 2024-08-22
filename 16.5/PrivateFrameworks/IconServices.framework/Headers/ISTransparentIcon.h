// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISTRANSPARENTICON_H
#define ISTRANSPARENTICON_H



#import "ISConcreteIcon.h"
#import "ISResourceProvider.h"

@interface ISTransparentIcon : ISConcreteIcon {
    ISResourceProvider *_resourceProvider;
}




+(BOOL)supportsSecureCoding;
+(id)sharedInstance;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)makeResourceProvider;


@end


#endif