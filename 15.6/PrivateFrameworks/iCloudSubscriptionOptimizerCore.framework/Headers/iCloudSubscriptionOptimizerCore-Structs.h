typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL avgWeeklyScreenTimeSeconds2w;
    BOOL cameraAppLaunchCount1w;
    BOOL daemonVersion;
    BOOL dailyScreenTimeSeconds;
    BOOL diskStorageCapacityBytes;
    BOOL dropboxAppLaunchCount1w;
    BOOL filesAppLaunchCount1w;
    BOOL googleDriveAppLaunchCount1w;
    BOOL googlePhotoAppLaunchCount1w;
    BOOL lastOpenedAppHour24h;
    BOOL mlServerScore;
    BOOL offsetMins;
    BOOL openedICloudNotificationRatio1w;
    BOOL openedICloudNotificationRatio2w;
    BOOL openedNotificationRatio1w;
    BOOL openedNotificationRatio24h;
    BOOL photosAppLaunchCount1w;
    BOOL timestampMillis;
    BOOL totalNotificationCount1w;
    BOOL totalOpenedNotificationCount1w;
    BOOL usedDiskCapacityBytes;
    BOOL hourOfDay;
    BOOL oBSOLETETrafficType;
    BOOL trafficType;
    BOOL isDoNotDisturbOn;
    BOOL isDrivingModeOn;
    BOOL isSleepModeOn;
} ?;

typedef struct RefCountBitsT<swift::RefCountIsInline> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> {
    uint8_t __a_value;
    RefCountBitsT<swift::RefCountIsInline> field1;
} __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>>;

typedef struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> {
    __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> __a_;
} atomic<swift::RefCountBitsT<swift::RefCountIsInline>>;

typedef struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> {
    atomic<swift::RefCountBitsT<swift::RefCountIsInline>> refCounts;
} RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>>;

