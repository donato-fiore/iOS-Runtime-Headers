// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCLOUDSYNCINGOBJECTACTIVITYEVENT_H
#define ICCLOUDSYNCINGOBJECTACTIVITYEVENT_H

@class NSData, NSString;
@protocol CRCoding, CRDataType;

#import <Foundation/Foundation.h>


@interface ICCloudSyncingObjectActivityEvent : NSObject <CRCoding, CRDataType>



@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *fallbackData; // ivar: _fallbackData
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerWithCRCoder;
-(BOOL)isEqual:(id)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 fallbackData:(id)arg1 ;
-(id)tombstone;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)mergeWith:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif