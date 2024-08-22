// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDDOWNLOADQUEUEREQUESTOPTIONS_H
#define ASDDOWNLOADQUEUEREQUESTOPTIONS_H



#import "ASDRequestOptions.h"
#import "ASDJobManifest.h"

@interface ASDDownloadQueueRequestOptions : ASDRequestOptions

@property (copy, nonatomic) ASDJobManifest *manifest; // ivar: _manifest


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithManifest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif