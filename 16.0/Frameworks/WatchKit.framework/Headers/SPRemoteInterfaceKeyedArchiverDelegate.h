// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPREMOTEINTERFACEKEYEDARCHIVERDELEGATE_H
#define SPREMOTEINTERFACEKEYEDARCHIVERDELEGATE_H

@class NSString;
@protocol NSKeyedArchiverDelegate;

#import <Foundation/Foundation.h>


@interface SPRemoteInterfaceKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL imageIsNamed; // ivar: _imageIsNamed
@property (readonly) Class superclass;


-(id)archiver:(id)arg0 willEncodeObject:(id)arg1 ;
-(void)archiver:(id)arg0 didEncodeObject:(id)arg1 ;


@end


#endif