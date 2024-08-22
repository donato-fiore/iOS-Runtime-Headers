// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEFILE_H
#define DEFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DEFile : NSObject

@property shared_ptr<siri::dialogengine::File> This; // ivar: _This
@property (retain) NSString *id;
@property (retain) NSString *localeFilename;
@property (retain) NSString *paramsFilename;


-(id)execute:(id)arg0 ;
-(id)getDialogs;
-(id)getFormatVersion;
-(id)getParameters;
-(id)getRoot;
-(id)init;
-(id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::File> )arg0 ;
-(struct shared_ptr<siri::dialogengine::File> )getSharedPtr;
-(void)addPhrase:(id)arg0 ;


@end


#endif