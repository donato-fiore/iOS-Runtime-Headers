// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFILEBACKEDMARKER_H
#define CRKFILEBACKEDMARKER_H

@class NSURL, NSString;
@protocol CRKMarker;

#import <Foundation/Foundation.h>


@interface CRKFileBackedMarker : NSObject <CRKMarker>

 {
    NSURL *mFileURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL exists;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)createWithError:(*id)arg0 ;
-(BOOL)deleteWithError:(*id)arg0 ;
-(id)init;
-(id)initWithFileURL:(id)arg0 ;


@end


#endif