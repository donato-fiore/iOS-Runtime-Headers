// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKSECURECODINGARCHIVINGDELEGATE_H
#define WKSECURECODINGARCHIVINGDELEGATE_H

@class NSString;
@protocol NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate;

#import <Foundation/Foundation.h>


@interface WKSecureCodingArchivingDelegate : NSObject <NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)archiver:(id)arg0 willEncodeObject:(id)arg1 ;
-(id)unarchiver:(id)arg0 didDecodeObject:(id)arg1 ;


@end


#endif