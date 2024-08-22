// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWBROWSEDESCRIPTOR_H
#define NWBROWSEDESCRIPTOR_H

@class NSString;
@protocol NWPrettyDescription, OS_nw_browse_descriptor;

#import <Foundation/Foundation.h>


@interface NWBrowseDescriptor : NSObject <NWPrettyDescription>



@property (readonly, nonatomic) NSString *bonjourServiceDomain;
@property (readonly, nonatomic) NSString *bonjourServiceType;
@property (retain, nonatomic) NSObject<OS_nw_browse_descriptor> *internalDescriptor; // ivar: _internalDescriptor
@property (readonly, copy, nonatomic) NSString *privateDescription;


+(BOOL)supportsBrowseCallback;
+(Class)copyClassForDescriptorType:(int)arg0 ;
+(id)descriptorWithInternalDescriptor:(id)arg0 ;
+(id)descriptorWithProtocolBufferData:(id)arg0 ;
+(unsigned int)descriptorType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createProtocolBufferObject;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)encodedData;
-(id)initWithDescriptor:(id)arg0 ;
-(id)initWithEncodedData:(id)arg0 ;
-(void)browseWithCompletionHandler:(id)arg0 ;


@end


#endif