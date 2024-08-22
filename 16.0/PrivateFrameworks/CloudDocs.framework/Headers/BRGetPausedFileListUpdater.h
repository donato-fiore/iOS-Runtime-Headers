// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRGETPAUSEDFILELISTUPDATER_H
#define BRGETPAUSEDFILELISTUPDATER_H

@protocol BRGetPausedFileListProtocol, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRGetPausedFileListUpdater : NSObject <BRGetPausedFileListProtocol, NSSecureCoding>

 {
    id *_callback;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCallback:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updatePausedFileURL:(id)arg0 reply:(id)arg1 ;


@end


#endif