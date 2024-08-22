// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPSERVEROBJECTDATABASE_H
#define MUSICKIT_SOFTLINKING_MPSERVEROBJECTDATABASE_H

@class MPServerObjectDatabase;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPServerObjectDatabase : NSObject {
    MPServerObjectDatabase *_underlyingServerObjectDatabase;
}




+(id)sharedServerObjectDatabase;
-(id)_initWithUnderlyingServerObjectDatabase:(id)arg0 ;
-(id)importObjectsFromRequest:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)payloadDataForIdentifier:(id)arg0 catalogTypes:(id)arg1 error:(*id)arg2 ;


@end


#endif